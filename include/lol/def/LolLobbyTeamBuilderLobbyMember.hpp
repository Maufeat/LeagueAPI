#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderLobbyPositionPreferences.hpp"
namespace lol {
  struct LolLobbyTeamBuilderLobbyMember { 
    uint64_t id;
    bool isOwner;
    bool canInviteOthers;
    LolLobbyTeamBuilderLobbyPositionPreferences positionPreferences;
    std::optional<std::string> excludedPositionPreference;
    bool showPositionExcluder;
    bool autoFillEligible;
    bool autoFillProtectedForStreaking;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForSoloing; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLobbyMember& v) {
    j["id"] = v.id; 
    j["isOwner"] = v.isOwner; 
    j["canInviteOthers"] = v.canInviteOthers; 
    j["positionPreferences"] = v.positionPreferences; 
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLobbyMember& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.isOwner = j.at("isOwner").get<bool>(); 
    v.canInviteOthers = j.at("canInviteOthers").get<bool>(); 
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences>(); 
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::optional<std::string>>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
  }
}