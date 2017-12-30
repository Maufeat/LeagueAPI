#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyBotDifficulty.hpp"
#include "LolLobbyLobbyPositionPreferences.hpp"
namespace lol {
  struct LolLobbyLobbyMember { 
    bool isSpectator;
    uint64_t id;
    LolLobbyLobbyBotDifficulty botDifficulty;
    LolLobbyLobbyPositionPreferences positionPreferences;
    bool isOwner;
    bool autoFillEligible;
    int32_t botChampionId;
    std::optional<std::string> excludedPositionPreference;
    bool autoFillProtectedForStreaking;
    bool canInviteOthers;
    bool autoFillProtectedForPromos;
    bool showPositionExcluder;
    bool isBot;
    std::string summonerInternalName;
    bool autoFillProtectedForSoloing; 
  };
  inline void to_json(json& j, const LolLobbyLobbyMember& v) {
    j["isSpectator"] = v.isSpectator; 
    j["id"] = v.id; 
    j["botDifficulty"] = v.botDifficulty; 
    j["positionPreferences"] = v.positionPreferences; 
    j["isOwner"] = v.isOwner; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["botChampionId"] = v.botChampionId; 
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["canInviteOthers"] = v.canInviteOthers; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["isBot"] = v.isBot; 
    j["summonerInternalName"] = v.summonerInternalName; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
  }
  inline void from_json(const json& j, LolLobbyLobbyMember& v) {
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>(); 
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences>(); 
    v.isOwner = j.at("isOwner").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.botChampionId = j.at("botChampionId").get<int32_t>(); 
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::optional<std::string>>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.canInviteOthers = j.at("canInviteOthers").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.isBot = j.at("isBot").get<bool>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
  }
}