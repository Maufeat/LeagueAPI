#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderLobbyPositionPreferences.hpp>
namespace lol {
  struct LolLobbyTeamBuilderLobbyMember { 
    bool canInviteOthers;
    bool isOwner;
    LolLobbyTeamBuilderLobbyPositionPreferences positionPreferences;
    bool autoFillProtectedForPromos;
    bool showPositionExcluder;
    bool autoFillEligible;
    bool autoFillProtectedForStreaking;
    bool autoFillProtectedForSoloing;
    std::optional<std::string> excludedPositionPreference;
    uint64_t id; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLobbyMember& v) {
    j["canInviteOthers"] = v.canInviteOthers; 
    j["isOwner"] = v.isOwner; 
    j["positionPreferences"] = v.positionPreferences; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
    j["showPositionExcluder"] = v.showPositionExcluder; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["autoFillProtectedForSoloing"] = v.autoFillProtectedForSoloing; 
    if(v.excludedPositionPreference)
      j["excludedPositionPreference"] = *v.excludedPositionPreference;
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLobbyMember& v) {
    v.canInviteOthers = j.at("canInviteOthers").get<bool>(); 
    v.isOwner = j.at("isOwner").get<bool>(); 
    v.positionPreferences = j.at("positionPreferences").get<LolLobbyTeamBuilderLobbyPositionPreferences>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
    v.showPositionExcluder = j.at("showPositionExcluder").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillProtectedForSoloing = j.at("autoFillProtectedForSoloing").get<bool>(); 
    if(auto it = j.find("excludedPositionPreference"); it != j.end() && !it->is_null())
      v.excludedPositionPreference = it->get<std::optional<std::string>>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}