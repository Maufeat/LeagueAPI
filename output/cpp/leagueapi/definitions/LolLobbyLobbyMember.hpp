#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyLobbyBotDifficulty.hpp>
#include <leagueapi/definitions/LolLobbyLobbyPositionPreferences.hpp>

namespace leagueapi {
  struct LolLobbyLobbyMember { /**/ 
    bool isSpectator;/**/
    bool autoFillProtectedForStreaking;/**/
    bool autoFillProtectedForPromos;/**/
    uint64_t id;/**/
    bool canInviteOthers;/**/
    std::optional<std::string> excludedPositionPreference;/**/
    bool isBot;/**/
    std::string summonerInternalName;/**/
    int32_t botChampionId;/**/
    LolLobbyLobbyPositionPreferences positionPreferences;/**/
    LolLobbyLobbyBotDifficulty botDifficulty;/**/
    bool autoFillEligible;/**/
    bool autoFillProtectedForSoloing;/**/
    bool isOwner;/**/
    bool showPositionExcluder;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyMember& v) { 
    j["isSpectator"] = v.isSpectator;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["id"] = v.id;
    j["canInviteOthers"] = v.canInviteOthers;
    j["excludedPositionPreference"] = v.excludedPositionPreference;
    j["isBot"] = v.isBot;
    j["summonerInternalName"] = v.summonerInternalName;
    j["botChampionId"] = v.botChampionId;
    j["positionPreferences"] = v.positionPreferences;
    j["botDifficulty"] = v.botDifficulty;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing;
    j["isOwner"] = v.isOwner;
    j["showPositionExcluder"] = v.showPositionExcluder;
  }
  static void from_json(const json& j, LolLobbyLobbyMember& v) { 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.canInviteOthers = j.at("canInviteOthers").get<bool>(); 
    v.excludedPositionPreference = j.at("excludedPositionPreference").get<std::optional<std::string>>(); 
    v.isBot = j.at("isBot").get<bool>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.botChampionId = j.at("botChampionId").get<int32_t>(); 
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences>(); 
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.isOwner = j.at("isOwner").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
  }
} 