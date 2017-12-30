#pragma once
#include "../base_def.hpp" 
#include "RosterMemberDTO.hpp"
#include "RosterDynamicStateDTO.hpp"
#include "PhaseRosterDTO.hpp"
namespace lol {
  struct RosterDTO { 
    std::string name;
    int64_t tournamentId;
    int64_t id;
    RosterDynamicStateDTO dynamicState;
    std::vector<PhaseRosterDTO> phases;
    int32_t tier;
    bool eliminated;
    std::vector<RosterMemberDTO> members;
    int32_t losses;
    int32_t logo;
    uint64_t captainId;
    std::string shortName;
    int32_t wins;
    int32_t logoColor; 
  };
  inline void to_json(json& j, const RosterDTO& v) {
    j["name"] = v.name; 
    j["tournamentId"] = v.tournamentId; 
    j["id"] = v.id; 
    j["dynamicState"] = v.dynamicState; 
    j["phases"] = v.phases; 
    j["tier"] = v.tier; 
    j["eliminated"] = v.eliminated; 
    j["members"] = v.members; 
    j["losses"] = v.losses; 
    j["logo"] = v.logo; 
    j["captainId"] = v.captainId; 
    j["shortName"] = v.shortName; 
    j["wins"] = v.wins; 
    j["logoColor"] = v.logoColor; 
  }
  inline void from_json(const json& j, RosterDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO>(); 
    v.phases = j.at("phases").get<std::vector<PhaseRosterDTO>>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.eliminated = j.at("eliminated").get<bool>(); 
    v.members = j.at("members").get<std::vector<RosterMemberDTO>>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.captainId = j.at("captainId").get<uint64_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
  }
}