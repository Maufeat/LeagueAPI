#pragma once
#include "../base_def.hpp" 
#include "RosterMemberDTO.hpp"
#include "PhaseRosterDTO.hpp"
#include "RosterDynamicStateDTO.hpp"
namespace lol {
  struct RosterDTO { 
    std::vector<PhaseRosterDTO> phases;
    uint64_t captainId;
    RosterDynamicStateDTO dynamicState;
    int64_t tournamentId;
    std::string name;
    int32_t logo;
    std::string shortName;
    int32_t logoColor;
    std::vector<RosterMemberDTO> members;
    int64_t id;
    bool eliminated;
    int32_t tier;
    int32_t wins;
    int32_t losses; 
  };
  inline void to_json(json& j, const RosterDTO& v) {
    j["phases"] = v.phases; 
    j["captainId"] = v.captainId; 
    j["dynamicState"] = v.dynamicState; 
    j["tournamentId"] = v.tournamentId; 
    j["name"] = v.name; 
    j["logo"] = v.logo; 
    j["shortName"] = v.shortName; 
    j["logoColor"] = v.logoColor; 
    j["members"] = v.members; 
    j["id"] = v.id; 
    j["eliminated"] = v.eliminated; 
    j["tier"] = v.tier; 
    j["wins"] = v.wins; 
    j["losses"] = v.losses; 
  }
  inline void from_json(const json& j, RosterDTO& v) {
    v.phases = j.at("phases").get<std::vector<PhaseRosterDTO>>(); 
    v.captainId = j.at("captainId").get<uint64_t>(); 
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.members = j.at("members").get<std::vector<RosterMemberDTO>>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.eliminated = j.at("eliminated").get<bool>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.losses = j.at("losses").get<int32_t>(); 
  }
}