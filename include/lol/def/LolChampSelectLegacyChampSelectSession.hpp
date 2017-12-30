#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyChampSelectTradeContract.hpp"
#include "LolChampSelectLegacyChampSelectTimer.hpp"
#include "LolChampSelectLegacyChampSelectPlayerSelection.hpp"
#include "LolChampSelectLegacyChampSelectChatRoomDetails.hpp"
#include "LolChampSelectLegacyChampSelectBannedChampions.hpp"
namespace lol {
  struct LolChampSelectLegacyChampSelectSession { 
    bool isSpectating;
    LolChampSelectLegacyChampSelectTimer timer;
    int64_t localPlayerCellId;
    std::vector<json> actions;
    bool allowBattleBoost;
    uint32_t rerollsRemaining;
    std::vector<LolChampSelectLegacyChampSelectTradeContract> trades;
    bool allowRerolling;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> theirTeam;
    LolChampSelectLegacyChampSelectBannedChampions bans;
    bool allowSkinSelection;
    LolChampSelectLegacyChampSelectChatRoomDetails chatDetails;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> myTeam; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyChampSelectSession& v) {
    j["isSpectating"] = v.isSpectating; 
    j["timer"] = v.timer; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["actions"] = v.actions; 
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["rerollsRemaining"] = v.rerollsRemaining; 
    j["trades"] = v.trades; 
    j["allowRerolling"] = v.allowRerolling; 
    j["theirTeam"] = v.theirTeam; 
    j["bans"] = v.bans; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["chatDetails"] = v.chatDetails; 
    j["myTeam"] = v.myTeam; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyChampSelectSession& v) {
    v.isSpectating = j.at("isSpectating").get<bool>(); 
    v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
    v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract>>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>(); 
    v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>(); 
  }
}