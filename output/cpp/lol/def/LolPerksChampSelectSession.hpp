#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPerksChampSelectChatRoomDetails.hpp>
#include <lol/def/LolPerksChampSelectTimer.hpp>
#include <lol/def/LolPerksChampSelectTradeContract.hpp>
#include <lol/def/LolPerksChampSelectPlayerSelection.hpp>
#include <lol/def/LolPerksChampSelectBannedChampions.hpp>
namespace lol {
  struct LolPerksChampSelectSession { 
    std::vector<LolPerksChampSelectTradeContract> trades;
    std::vector<LolPerksChampSelectPlayerSelection> theirTeam;
    bool isSpectating;
    std::vector<json> actions;
    int64_t localPlayerCellId;
    LolPerksChampSelectTimer timer;
    LolPerksChampSelectChatRoomDetails chatDetails;
    std::vector<LolPerksChampSelectPlayerSelection> myTeam;
    LolPerksChampSelectBannedChampions bans; 
  };
  void to_json(json& j, const LolPerksChampSelectSession& v) {
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
  void from_json(const json& j, LolPerksChampSelectSession& v) {
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