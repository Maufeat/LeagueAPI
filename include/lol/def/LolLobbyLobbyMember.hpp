#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyPositionPreferences.hpp"
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace lol {
  struct LolLobbyLobbyMember { 
    LolLobbyLobbyPositionPreferences positionPreferences;
    std::optional<std::string> excludedPositionPreference;
    bool isSpectator;
    int32_t botChampionId;
    bool autoFillProtectedForPromos;
    bool isBot;
    bool canInviteOthers;
    std::string summonerInternalName;
    bool autoFillProtectedForSoloing;
    bool autoFillEligible;
    uint64_t id;
    bool isOwner;
    bool showPositionExcluder;
    bool autoFillProtectedForStreaking;
    LolLobbyLobbyBotDifficulty botDifficulty; 
  };
  inline void to_json(json& j, const LolLobbyLobbyMember& v) {
    j["positionPreferences"] = v.positionPreferences; 
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["isSpectator"] = v.isSpectator; 
    j["botChampionId"] = v.botChampionId; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["isBot"] = v.isBot; 
    j["canInviteOthers"] = v.canInviteOthers; 
    j["summonerInternalName"] = v.summonerInternalName; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["id"] = v.id; 
    j["isOwner"] = v.isOwner; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["botDifficulty"] = v.botDifficulty; 
  }
  inline void from_json(const json& j, LolLobbyLobbyMember& v) {
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyLobbyPositionPreferences>(); 
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::optional<std::string>>(); 
    v.isSpectator = j.at("isSpectator").get<bool>(); 
    v.botChampionId = j.at("botChampionId").get<int32_t>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.isBot = j.at("isBot").get<bool>(); 
    v.canInviteOthers = j.at("canInviteOthers").get<bool>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.isOwner = j.at("isOwner").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>(); 
  }
}