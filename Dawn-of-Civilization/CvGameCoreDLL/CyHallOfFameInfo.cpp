#include "CvGameCoreDLL.h"
#include "CyHallOfFameInfo.h"
#include "CyReplayInfo.h"
//mediv01 CYϵ����Ҫ�ǽӿں������Խ�CV�е���Ϸ�߼� 202000822
CyHallOfFameInfo::CyHallOfFameInfo()
{
}


void CyHallOfFameInfo::loadReplays()
{
	m_hallOfFame.loadReplays();
}

int CyHallOfFameInfo::getNumGames() const
{
	return m_hallOfFame.getNumGames();
}

CyReplayInfo* CyHallOfFameInfo::getReplayInfo(int i)
{
	return (new CyReplayInfo(m_hallOfFame.getReplayInfo(i)));
}

