#pragma once
#include "../base_def.hpp" 
#include "LolPerksChampSelectTimer.hpp"
#include "LolPerksChampSelectPlayerSelection.hpp"
#include "LolPerksChampSelectChatRoomDetails.hpp"
#include "LolPerksChampSelectBannedChampions.hpp"
#include "LolPerksChampSelectTradeContract.hpp"
namespace lol {
  struct LolPerksChampSelectSession { 
    LolPerksChampSelectTimer timer;
    LolPerksChampSelectChatRoomDetails chatDetails;
    std::vector<LolPerksChampSelectPlayerSelection> myTeam;
    std::vector<LolPerksChampSelectPlayerSelection> theirTeam;
    std::vector<LolPerksChampSelectTradeContract> trades;
    std::vector<json> actions;
    LolPerksChampSelectBannedChampions bans;
    int64_t localPlayerCellId;
    bool isSpectating; 
  };
  inline void to_json(json& j, const LolPerksChampSelectSession& v) {
    j["timer"] = v.timer; 
    j["chatDetails"] = v.chatDetails; 
    j["myTeam"] = v.myTeam; 
    j["theirTeam"] = v.theirTeam; 
    j["trades"] = v.trades; 
    j["actions"] = v.actions; 
    j["bans"] = v.bans; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["isSpectating"] = v.isSpectating; 
  }
  inline void from_json(const json& j, LolPerksChampSelectSession& v) {
    v.timer = j.at("timer").get<LolPerksChampSelectTimer>(); 
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>(); 
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract>>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.isSpectating = j.at("isSpectating").get<bool>(); 
  }
}