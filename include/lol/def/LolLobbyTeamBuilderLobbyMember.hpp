#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderLobbyPositionPreferences.hpp"
namespace lol {
  struct LolLobbyTeamBuilderLobbyMember { 
    bool autoFillEligible;
    bool showPositionExcluder;
    uint64_t id;
    LolLobbyTeamBuilderLobbyPositionPreferences positionPreferences;
    bool isOwner;
    bool autoFillProtectedForPromos;
    std::optional<std::string> excludedPositionPreference;
    bool autoFillProtectedForStreaking;
    bool autoFillProtectedForSoloing;
    bool canInviteOthers; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLobbyMember& v) {
    j["autoFillEligible"] = v.autoFillEligible; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["id"] = v.id; 
    j["positionPreferences"] = v.positionPreferences; 
    j["isOwner"] = v.isOwner; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
    j["canInviteOthers"] = v.canInviteOthers; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLobbyMember& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences>(); 
    v.isOwner = j.at("isOwner").get<bool>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::optional<std::string>>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.canInviteOthers = j.at("canInviteOthers").get<bool>(); 
  }
}