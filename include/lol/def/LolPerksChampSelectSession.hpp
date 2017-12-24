#pragma once
#include "../base_def.hpp" 
#include "LolPerksChampSelectTimer.hpp"
#include "LolPerksChampSelectBannedChampions.hpp"
#include "LolPerksChampSelectTradeContract.hpp"
#include "LolPerksChampSelectPlayerSelection.hpp"
#include "LolPerksChampSelectChatRoomDetails.hpp"
namespace lol {
  struct LolPerksChampSelectSession { 
    LolPerksChampSelectChatRoomDetails chatDetails;
    LolPerksChampSelectBannedChampions bans;
    std::vector<json> actions;
    std::vector<LolPerksChampSelectPlayerSelection> theirTeam;
    std::vector<LolPerksChampSelectPlayerSelection> myTeam;
    LolPerksChampSelectTimer timer;
    int64_t localPlayerCellId;
    bool isSpectating;
    std::vector<LolPerksChampSelectTradeContract> trades; 
  };
  inline void to_json(json& j, const LolPerksChampSelectSession& v) {
    j["chatDetails"] = v.chatDetails; 
    j["bans"] = v.bans; 
    j["actions"] = v.actions; 
    j["theirTeam"] = v.theirTeam; 
    j["myTeam"] = v.myTeam; 
    j["timer"] = v.timer; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["isSpectating"] = v.isSpectating; 
    j["trades"] = v.trades; 
  }
  inline void from_json(const json& j, LolPerksChampSelectSession& v) {
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails>(); 
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>(); 
    v.timer = j.at("timer").get<LolPerksChampSelectTimer>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.isSpectating = j.at("isSpectating").get<bool>(); 
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract>>(); 
  }
}