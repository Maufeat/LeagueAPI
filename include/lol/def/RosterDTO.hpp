#pragma once
#include "../base_def.hpp" 
#include "RosterDynamicStateDTO.hpp"
#include "PhaseRosterDTO.hpp"
#include "RosterMemberDTO.hpp"
namespace lol {
  struct RosterDTO { 
    int32_t logoColor;
    int32_t wins;
    int32_t tier;
    RosterDynamicStateDTO dynamicState;
    int32_t logo;
    std::string shortName;
    std::vector<RosterMemberDTO> members;
    int64_t id;
    uint64_t captainId;
    int64_t tournamentId;
    int32_t losses;
    std::vector<PhaseRosterDTO> phases;
    bool eliminated;
    std::string name; 
  };
  inline void to_json(json& j, const RosterDTO& v) {
    j["logoColor"] = v.logoColor; 
    j["wins"] = v.wins; 
    j["tier"] = v.tier; 
    j["dynamicState"] = v.dynamicState; 
    j["logo"] = v.logo; 
    j["shortName"] = v.shortName; 
    j["members"] = v.members; 
    j["id"] = v.id; 
    j["captainId"] = v.captainId; 
    j["tournamentId"] = v.tournamentId; 
    j["losses"] = v.losses; 
    j["phases"] = v.phases; 
    j["eliminated"] = v.eliminated; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, RosterDTO& v) {
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.members = j.at("members").get<std::vector<RosterMemberDTO>>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.captainId = j.at("captainId").get<uint64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.phases = j.at("phases").get<std::vector<PhaseRosterDTO>>(); 
    v.eliminated = j.at("eliminated").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}