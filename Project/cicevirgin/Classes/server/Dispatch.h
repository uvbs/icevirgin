
#pragma once
#include "SChatMsg.h"
#include "_SToastMsg.h"
#include "_SFightMonsterInfo.h"
#include "_SFightBlood.h"
#include "_SRequestUserInfo.h"
#include "_SRequestTaskStatus.h"
#include "_SRequestRank.h"
#include "_SLogin.h"
#include "_SAddCharacter.h"
#include "_SRemoveCharacter.h"
#include "_CharacterPos.h"
#include "_SRequestPvpRooms.h"
#include "_SEnterPvpRoom.h"
#include "_SPvpRoomEnermyInfo.h"
#include "_SPvpAttackFlag.h"


class Dispatch
{

public:
	static void run(int id,string data)
	{

		if (id == 1006)
		{
			SChatMsg serMsg;
			serMsg.ParseFromString(data);

			_SChatMsg().process(serMsg);
		}
		else if (id == 1007)
		{
			SToastMsg serMsg;
			serMsg.ParseFromString(data);

			_SToastMsg().process(serMsg);
		}

		else if (id == 1010)
		{
			SFightMonsterInfo serMsg;
			serMsg.ParseFromString(data);

			_SFightMonsterInfo().process(serMsg);
		}
		else if (id == 1011)
		{
			SFightBlood serMsg;
			serMsg.ParseFromString(data);

			_SFightBlood().process(serMsg);
		}
		else if (id == 1013)
		{
			SRequestUserInfo serMsg;
			serMsg.ParseFromString(data);

			_SRequestUserInfo().process(serMsg);
		}

		else if (id == 1015)
		{	
			SRequestTaskStatus serMsg;
			serMsg.ParseFromString(data);

			_SRequestTaskStatus().process(serMsg);

		}
		else if (id == 1018)
		{
			SRequestRank serMsg;
			serMsg.ParseFromString(data);

			_SRequestRank().process(serMsg);
		}

		else if (id == 1021)
		{
			SLogin serMsg;
			serMsg.ParseFromString(data);
			
			_SLogin().process(serMsg);
		}

		else if (id == 1022)
		{
			SAddCharacter serMsg;
			serMsg.ParseFromString(data);

			_SAddCharacter().process(serMsg);
		}

		else if (id == 1023)
		{
			SRemoveCharacter serMsg;
			serMsg.ParseFromString(data);

			_SRemoveCharacter().process(serMsg);
		}

		else if (id == 1025)
		{
			SCharacterPos serMsg;
			serMsg.ParseFromString(data);

			_CharacterPos().process(serMsg);
		}

		else if (id == 1028)
		{
			SRequestPvpRooms serMsg;
			serMsg.ParseFromString(data);

			_SRequestPvpRooms().process(serMsg);
		}

		else if (id == 1031)
		{
			SEnterPvpRoom serMsg;
			serMsg.ParseFromString(data);

			_SEnterPvpRoom().process(serMsg);
		}

		else if (id == 1032)
		{
			SPvpRoomEnermyInfo serMsg;
			serMsg.ParseFromString(data);

			_SPvpRoomEnermyInfo().process(serMsg);
		}

		else if (id == 1033)
		{
			SPvpAttackFlag serMsg;
			serMsg.ParseFromString(data);

			_SPvpAttackFlag().process(serMsg);
		}
	}
};

