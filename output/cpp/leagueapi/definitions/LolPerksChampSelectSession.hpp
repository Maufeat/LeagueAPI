#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPerksChampSelectTimer.hpp>
#include <leagueapi/definitions/LolPerksChampSelectTradeContract.hpp>
#include <leagueapi/definitions/LolPerksChampSelectBannedChampions.hpp>
#include <leagueapi/definitions/LolPerksChampSelectChatRoomDetails.hpp>
#include <leagueapi/definitions/LolPerksChampSelectPlayerSelection.hpp>

namespace leagueapi {
  struct LolPerksChampSelectSession { /**/ 
    std::vector<LolPerksChampSelectTradeContract> trades;/**/
    std::vector<LolPerksChampSelectPlayerSelection> theirTeam;/**/
    bool isSpectating;/**/
    std::vector<json> actions;/**/
    int64_t localPlayerCellId;/**/
    LolPerksChampSelectTimer timer;/**/
    LolPerksChampSelectChatRoomDetails chatDetails;/**/
    std::vector<LolPerksChampSelectPlayerSelection> myTeam;/**/
    LolPerksChampSelectBannedChampions bans;/**/
  };
  static void to_json(json& j, const LolPerksChampSelectSession& v) { 
    j["trades"] = v.trades;
    j["theirTeam"] = v.theirTeam;
    j["isSpectating"] = v.isSpectating;
    j["actions"] = v.actions;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["timer"] = v.timer;
    j["chatDetails"] = v.chatDetails;
    j["myTeam"] = v.myTeam;
    j["bans"] = v.bans;
  }
  static void from_json(const json& j, LolPerksChampSelectSession& v) { 
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract>>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>(); 
    v.isSpectating = j.at("isSpectating").get<bool>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.timer = j.at("timer").get<LolPerksChampSelectTimer>(); 
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>(); 
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions>(); 
  }
} 