#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyBotDifficulty.hpp"
#include "LolLobbyLobbyPositionPreferences.hpp"
namespace lol {
  struct LolLobbyLobbyMember { 
    uint64_t id;
    bool isOwner;
    bool isSpectator;
    bool canInviteOthers;
    LolLobbyLobbyPositionPreferences positionPreferences;
    std::optional<std::string> excludedPositionPreference;
    std::string summonerInternalName;
    bool showPositionExcluder;
    bool autoFillEligible;
    bool autoFillProtectedForStreaking;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForSoloing;
    bool isBot;
    LolLobbyLobbyBotDifficulty botDifficulty;
    int32_t botChampionId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyMember& v) {
    j["id"] = v.id; 
    j["isOwner"] = v.isOwner; 
    j["isSpectator"] = v.isSpectator; 
    j["canInviteOthers"] = v.canInviteOthers; 
    j["positionPreferences"] = v.positionPreferences; 
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["summonerInternalName"] = v.summonerInternalName; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
    j["isBot"] = v.isBot; 
    j["botDifficulty"] = v.botDifficulty; 
    j["botChampionId"] = v.botChampionId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyMember& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.isOwner = j.at("isOwner").get<bool>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.canInviteOthers = j.at("canInviteOthers").get<bool>(); 
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences>(); 
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::optional<std::string>>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.isBot = j.at("isBot").get<bool>(); 
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>(); 
    v.botChampionId = j.at("botChampionId").get<int32_t>(); 
  }
}