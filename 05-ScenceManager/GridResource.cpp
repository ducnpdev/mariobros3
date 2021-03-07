#include "GridResource.h"

CGridResource::CGridResource(LPCWSTR path) {
	GridLoadResource(path);
}

void CGridResource::_ParseSection_Grid_ITEMS(string line) {
	vector<string> tokens = split(line);

}

void CGridResource::_ParseSection_Grid_ENEMIES(string line) {
	vector<string> tokens = split(line);
	if (tokens.size() < 6) return;
	int type = atoi(tokens[0].c_str());
	float x = (float)atof(tokens[1].c_str());
	float y = (float)atof(tokens[2].c_str());
	int ani_set_id = atoi(tokens[3].c_str());
	int XCell = atoi(tokens[4].c_str());
	int YCell = atoi(tokens[5].c_str());
	CAnimationSets* animation_sets = CAnimationSets::GetInstance();
	CGameObject* obj = NULL;
	switch (type)
	{
	case OBJECT_TYPE_GOOMBA: obj = new CGoomba(); break;
	case OBJECT_TYPE_KOOPAS: obj = new CKoopas(); break;
	default:
		DebugOut(L"[ERR] Invalid object type: %d\n", type);
		return;
	}
	LPANIMATION_SET ani_set = animation_sets->Get(ani_set_id);

	if (obj == NULL) return;
	
	int add = 0;
	obj->SetPosition(x, y);
	obj->SetAnimationSet(ani_set);
	cellResource[XCell][YCell].PushObjectToCellResource(obj);
}

void CGridResource::GridLoadResource(LPCWSTR path) {

	ifstream fStream;
	fStream.open(path);
	int section = SCENE_SECTION_UNKNOWN;

	char str[MAX_SCENE_LINE];
	while (fStream.getline(str, MAX_SCENE_LINE))
	{
		string line(str);

		if (line[0] == '#') continue;	// skip comment lines	

		if (line == "[OBJECTITEM]") { section = GRID_RESOURCE_OBJECT_ITEM; continue; }

		if (line == "[GRIDENEMIES]") { section = GRID_RESOURCE_ENEMIES; continue; }

		if (line[0] == '[') { section = SCENE_SECTION_UNKNOWN; continue; }

		//
		// data section
		//
		switch (section)
		{
		case GRID_RESOURCE_OBJECT_ITEM: _ParseSection_Grid_ITEMS(line); break;
		case GRID_RESOURCE_ENEMIES: _ParseSection_Grid_ENEMIES(line); break;
		}
	}

	fStream.close();

}

// unload all resource in cell, cell in grid
void CGridResource::GirdRemoveResource(){
	DebugOut(L"CGrid GirdRemoveResource;\n");
}

// load all object in game need to render
void CGridResource::GirdPushResource(vector<LPGAMEOBJECT>& listResource, int xcam, int ycam) {
	DebugOut(L"CGrid GirdPushResource;\n");
}