#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyChampSelectTimer.hpp"
#include "LolChampSelectLegacyChampSelectChatRoomDetails.hpp"
#include "LolChampSelectLegacyChampSelectTradeContract.hpp"
#include "LolChampSelectLegacyChampSelectBannedChampions.hpp"
#include "LolChampSelectLegacyChampSelectPlayerSelection.hpp"
namespace lol {
  struct LolChampSelectLegacyChampSelectSession { 
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> myTeam;
    bool allowRerolling;
    bool allowSkinSelection;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> theirTeam;
    uint32_t rerollsRemaining;
    LolChampSelectLegacyChampSelectChatRoomDetails chatDetails;
    bool allowBattleBoost;
    LolChampSelectLegacyChampSelectBannedChampions bans;
    std::vector<json> actions;
    LolChampSelectLegacyChampSelectTimer timer;
    int64_t localPlayerCellId;
    bool isSpectating;
    std::vector<LolChampSelectLegacyChampSelectTradeContract> trades; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyChampSelectSession& v) {
    j["myTeam"] = v.myTeam; 
    j["allowRerolling"] = v.allowRerolling; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["theirTeam"] = v.theirTeam; 
    j["rerollsRemaining"] = v.rerollsRemaining; 
    j["chatDetails"] = v.chatDetails; 
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["bans"] = v.bans; 
    j["actions"] = v.actions; 
    j["timer"] = v.timer; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["isSpectating"] = v.isSpectating; 
    j["trades"] = v.trades; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyChampSelectSession& v) {
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
    v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.isSpectating = j.at("isSpectating").get<bool>(); 
    v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract>>(); 
  }
}