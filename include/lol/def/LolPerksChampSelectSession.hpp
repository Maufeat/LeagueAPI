#pragma once
#include "../base_def.hpp" 
#include "LolPerksChampSelectChatRoomDetails.hpp"
#include "LolPerksChampSelectTimer.hpp"
#include "LolPerksChampSelectBannedChampions.hpp"
#include "LolPerksChampSelectTradeContract.hpp"
#include "LolPerksChampSelectPlayerSelection.hpp"
namespace lol {
  struct LolPerksChampSelectSession { 
    bool isSpectating;
    LolPerksChampSelectTimer timer;
    int64_t localPlayerCellId;
    std::vector<json> actions;
    LolPerksChampSelectBannedChampions bans;
    LolPerksChampSelectChatRoomDetails chatDetails;
    std::vector<LolPerksChampSelectTradeContract> trades;
    std::vector<LolPerksChampSelectPlayerSelection> theirTeam;
    std::vector<LolPerksChampSelectPlayerSelection> myTeam; 
  };
  inline void to_json(json& j, const LolPerksChampSelectSession& v) {
    j["isSpectating"] = v.isSpectating; 
    j["timer"] = v.timer; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["actions"] = v.actions; 
    j["bans"] = v.bans; 
    j["chatDetails"] = v.chatDetails; 
    j["trades"] = v.trades; 
    j["theirTeam"] = v.theirTeam; 
    j["myTeam"] = v.myTeam; 
  }
  inline void from_json(const json& j, LolPerksChampSelectSession& v) {
    v.isSpectating = j.at("isSpectating").get<bool>(); 
    v.timer = j.at("timer").get<LolPerksChampSelectTimer>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.bans = j.at("bans").get<LolPerksChampSelectBannedChampions>(); 
    v.chatDetails = j.at("chatDetails").get<LolPerksChampSelectChatRoomDetails>(); 
    v.trades = j.at("trades").get<std::vector<LolPerksChampSelectTradeContract>>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolPerksChampSelectPlayerSelection>>(); 
  }
}