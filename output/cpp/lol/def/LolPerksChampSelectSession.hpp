#pragma once
#include "../base_def.hpp" 
#include "LolPerksChampSelectTimer.hpp"
#include "LolPerksChampSelectBannedChampions.hpp"
#include "LolPerksChampSelectPlayerSelection.hpp"
#include "LolPerksChampSelectTradeContract.hpp"
#include "LolPerksChampSelectChatRoomDetails.hpp"
namespace lol {
  struct LolPerksChampSelectSession { 
    std::vector<json> actions;
    LolPerksChampSelectChatRoomDetails chatDetails;
    bool isSpectating;
    int64_t localPlayerCellId;
    std::vector<LolPerksChampSelectPlayerSelection> myTeam;
    std::vector<LolPerksChampSelectPlayerSelection> theirTeam;
    std::vector<LolPerksChampSelectTradeContract> trades;
    LolPerksChampSelectTimer timer;
    LolPerksChampSelectBannedChampions bans; 
  };
  inline void to_json(json& j, const LolPerksChampSelectSession& v) {
    j["actions"] = v.actions; 
    j["chatDetails"] = v.chatDetails; 
    j["isSpectating"] = v.isSpectating; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["myTeam"] = v.myTeam; 
    j["theirTeam"] = v.theirTeam; 
    j["trades"] = v.trades; 
    j["timer"] = v.timer; 
    j["bans"] = v.bans; 
  }
  inline void from_json(const json& j, LolPerksChampSelectSession& v) {
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails>(); 
    v.isSpectating = j.at("isSpectating").get<bool>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>(); 
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract>>(); 
    v.timer = j.at("timer").get<LolPerksChampSelectTimer>(); 
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions>(); 
  }
}