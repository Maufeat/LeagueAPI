#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChampSelectLegacyChampSelectPlayerSelection.hpp>"
#include "<leagueapi/definitions/LolChampSelectLegacyChampSelectTradeContract.hpp>"
#include "<leagueapi/definitions/LolChampSelectLegacyChampSelectTimer.hpp>"
#include "<leagueapi/definitions/LolChampSelectLegacyChampSelectChatRoomDetails.hpp>"
#include "<leagueapi/definitions/LolChampSelectLegacyChampSelectBannedChampions.hpp>"

namespace leagueapi {
  struct LolChampSelectLegacyChampSelectSession { /**/ 
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> theirTeam;/**/
    bool isSpectating;/**/
    int64_t localPlayerCellId;/**/
    LolChampSelectLegacyChampSelectTimer timer;/**/
    bool allowBattleBoost;/**/
    LolChampSelectLegacyChampSelectChatRoomDetails chatDetails;/**/
    std::vector<LolChampSelectLegacyChampSelectPlayerSelection> myTeam;/**/
    bool allowRerolling;/**/
    std::vector<LolChampSelectLegacyChampSelectTradeContract> trades;/**/
    std::vector<json> actions;/**/
    uint32_t rerollsRemaining;/**/
    bool allowSkinSelection;/**/
    LolChampSelectLegacyChampSelectBannedChampions bans;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyChampSelectSession& v) { 
    j["theirTeam"] = v.theirTeam;
    j["isSpectating"] = v.isSpectating;
    j["localPlayerCellId"] = v.localPlayerCellId;
    j["timer"] = v.timer;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["chatDetails"] = v.chatDetails;
    j["myTeam"] = v.myTeam;
    j["allowRerolling"] = v.allowRerolling;
    j["trades"] = v.trades;
    j["actions"] = v.actions;
    j["rerollsRemaining"] = v.rerollsRemaining;
    j["allowSkinSelection"] = v.allowSkinSelection;
    j["bans"] = v.bans;
  }
  static void from_json(const json& j, LolChampSelectLegacyChampSelectSession& v) { 
    v.theirTeam = j.at("theirTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>(); 
    v.isSpectating = j.at("isSpectating").get<bool>(); 
    v.localPlayerCellId = j.at("localPlayerCellId").get<int64_t>(); 
    v.timer = j.at("timer").get<LolChampSelectLegacyChampSelectTimer>(); 
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>(); 
    v.chatDetails = j.at("chatDetails").get<LolChampSelectLegacyChampSelectChatRoomDetails>(); 
    v.myTeam = j.at("myTeam").get<std::vector<LolChampSelectLegacyChampSelectPlayerSelection>>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
    v.trades = j.at("trades").get<std::vector<LolChampSelectLegacyChampSelectTradeContract>>(); 
    v.actions = j.at("actions").get<std::vector<json>>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
    v.allowSkinSelection = j.at("allowSkinSelection").get<bool>(); 
    v.bans = j.at("bans").get<LolChampSelectLegacyChampSelectBannedChampions>(); 
  }
} 