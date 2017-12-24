#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderLobbyPositionPreferences.hpp"
namespace lol {
  struct LolLobbyTeamBuilderLobbyMember { 
    bool canInviteOthers;
    LolLobbyTeamBuilderLobbyPositionPreferences positionPreferences;
    std::optional<std::string> excludedPositionPreference;
    bool autoFillEligible;
    uint64_t id;
    bool autoFillProtectedForPromos;
    bool isOwner;
    bool autoFillProtectedForSoloing;
    bool showPositionExcluder;
    bool autoFillProtectedForStreaking; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLobbyMember& v) {
    j["canInviteOthers"] = v.canInviteOthers; 
    j["positionPreferences"] = v.positionPreferences; 
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["autoFillEligible"] = v.autoFillEligible; 
    j["id"] = v.id; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["isOwner"] = v.isOwner; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLobbyMember& v) {
    v.canInviteOthers = j.at("canInviteOthers").get<bool>(); 
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences>(); 
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::optional<std::string>>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.isOwner = j.at("isOwner").get<bool>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
  }
}