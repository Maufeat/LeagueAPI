#pragma once
#include "../base_def.hpp" 
#include "PhaseRosterDTO.hpp"
#include "RosterDynamicStateDTO.hpp"
#include "RosterMemberDTO.hpp"
namespace lol {
  struct RosterDTO { 
    int32_t version;
    int64_t id;
    int64_t tournamentId;
    std::string name;
    std::string shortName;
    int32_t logo;
    int32_t logoColor;
    int32_t tier;
    int32_t wins;
    int32_t losses;
    bool eliminated;
    uint64_t captainId;
    std::vector<RosterMemberDTO> members;
    std::vector<PhaseRosterDTO> phases;
    RosterDynamicStateDTO dynamicState; 
  };
  inline void to_json(json& j, const RosterDTO& v) {
    j["version"] = v.version; 
    j["id"] = v.id; 
    j["tournamentId"] = v.tournamentId; 
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
    j["logo"] = v.logo; 
    j["logoColor"] = v.logoColor; 
    j["tier"] = v.tier; 
    j["wins"] = v.wins; 
    j["losses"] = v.losses; 
    j["eliminated"] = v.eliminated; 
    j["captainId"] = v.captainId; 
    j["members"] = v.members; 
    j["phases"] = v.phases; 
    j["dynamicState"] = v.dynamicState; 
  }
  inline void from_json(const json& j, RosterDTO& v) {
    v.version = j.at("version").get<int32_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.eliminated = j.at("eliminated").get<bool>(); 
    v.captainId = j.at("captainId").get<uint64_t>(); 
    v.members = j.at("members").get<std::vector<RosterMemberDTO>>(); 
    v.phases = j.at("phases").get<std::vector<PhaseRosterDTO>>(); 
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO>(); 
  }
}