#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderReadyStateV1 { 
    bool readyToMatchmake;
    bool premadeSizeAllowed;
    std::vector<int32_t> allowablePremadeSizes;
    bool requiredPositionCoverageMet; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderReadyStateV1& v) {
    j["readyToMatchmake"] = v.readyToMatchmake; 
    j["premadeSizeAllowed"] = v.premadeSizeAllowed; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderReadyStateV1& v) {
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>(); 
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>(); 
  }
}