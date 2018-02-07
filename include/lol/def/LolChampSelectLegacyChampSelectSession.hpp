#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyChampSelectBannedChampions.hpp"
#include "LolChampSelectLegacyChampSelectChatRoomDetails.hpp"
#include "LolChampSelectLegacyChampSelectTimer.hpp"
#include "LolChampSelectLegacyChampSelectPlayerSelection.hpp"
#include "LolChampSelectLegacyChampSelectTradeContract.hpp"
namespace lol {
  struct LolChampSelectLegacyChampSelectSession { 
    LolChampSelectLegacyChampSelectTimer timer;
    LolChampSelectLegacyChampSelectChatRoomDetails chatDetails;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> myTeam;
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> theirTeam;
    std::vector<LolChampSelectLegacyChampSelectTradeContract> trades;
    std::vector<json> actions;
    LolChampSelectLegacyChampSelectBannedChampions bans;
    int64_t localPlayerCellId;
    bool isSpectating;
    bool allowSkinSelection;
    bool allowBattleBoost;
    bool allowRerolling;
    uint32_t rerollsRemaining; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyChampSelectSession& v) {
    j["timer"] = v.timer; 
    j["chatDetails"] = v.chatDetails; 
    j["myTeam"] = v.myTeam; 
    j["theirTeam"] = v.theirTeam; 
    j["trades"] = v.trades; 
    j["actions"] = v.actions; 
    j["bans"] = v.bans; 
    j["localPlayerCellId"] = v.localPlayerCellId; 
    j["isSpectating"] = v.isSpectating; 
    j["allowSkinSelection"] = v.allowSkinSelection; 
    j["allowBattleBoost"] = v.allowBattleBoost; 
    j["allowRerolling"] = v.allowRerolling; 
    j["rerollsRemaining"] = v.rerollsRemaining; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyChampSelectSession& v) {
    v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer>(); 
    v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>(); 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>(); 
    v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract>>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.isSpectating = j.at("isSpectating").get<bool>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
  }
}