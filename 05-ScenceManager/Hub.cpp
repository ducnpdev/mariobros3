#include "Hub.h"

CHub::CHub()
{
	time = NULL; 
	camera = NULL;
	coin = NULL;	
	arrows = NULL;
	for (int i = 0; i < MaxShowCards; i++) {
		cards[i] = NULL;
	}
}

void CHub::Render()
{
	
	animation_set->at(0)->Render(x, y);
	// RenderBoundingBox();
}

void CHub::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{

	CGameObject::Update(dt);
	if (camera == NULL) return;
	SetPosition(camera->GetPositionCameraX() - BOARD_CAM_X_PLUS, camera->GetPositionCameraY() + BOARD_CAM_Y_PLUS);
	if (time != NULL) time->SetPositionNumbers(camera->GetPositionCameraX() + BOARD_TIME_X_PLUS, camera->GetPositionCameraY() + BOARD_TIME_Y_PLUS);
	if (coin != NULL)  coin->SetPositionNumbers(camera->GetPositionCameraX() + 160.0f, camera->GetPositionCameraY() + 176.0f);
	if (arrows != NULL) arrows->SetPositionListArrow(camera->GetPositionCameraX() + 80.0f, camera->GetPositionCameraY() + 176.0f);
	if (lives != NULL) lives->SetPositionNumbers(camera->GetPositionCameraX() + 56.0f, camera->GetPositionCameraY() + 185.0f);
}


void CHub::GetBoundingBox(float& l, float& t, float& r, float& b)
{
}

void CHub::SetTimeHub(CTime* t)
{
	time = t;
}

void CHub::SetCoinHub(CCoinPlay* c)
{
	coin = c;
}

void CHub::SetArrowHub(CListArrow* a)
{
	arrows = a;
}

void CHub::SetLives(CLives* l)
{
	lives = l;
}

void CHub::SetCardHub(CCard* c[MaxShowCards])
{
	for (int i = 0; i < MaxShowCards; i++) {
		cards[i] = c[i];
	}
}

void CHub::SetCameraHub(CCamera* c)
{
	camera = c;
}
