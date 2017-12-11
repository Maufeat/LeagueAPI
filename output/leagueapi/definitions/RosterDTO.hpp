#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/RosterDynamicStateDTO.hpp>"
#include "<leagueapi/definitions/PhaseRosterDTO.hpp>"
#include "<leagueapi/definitions/RosterMemberDTO.hpp>"

namespace leagueapi {
  struct RosterDTO { /**/ 
    int32_t logo;/**/
    std::string shortName;/**/
    int64_t id;/**/
    std::string name;/**/
    RosterDynamicStateDTO dynamicState;/**/
    int32_t wins;/**/
    int64_t tournamentId;/**/
    int32_t tier;/**/
    std::vector<PhaseRosterDTO> phases;/**/
    bool eliminated;/**/
    int32_t losses;/**/
    int32_t logoColor;/**/
    uint64_t captainId;/**/
    std::vector<RosterMemberDTO> members;/**/
  };
  static void to_json(json& j, const RosterDTO& v) { 
    j["logo"] = v.logo;
    j["shortName"] = v.shortName;
    j["id"] = v.id;
    j["name"] = v.name;
    j["dynamicState"] = v.dynamicState;
    j["wins"] = v.wins;
    j["tournamentId"] = v.tournamentId;
    j["tier"] = v.tier;
    j["phases"] = v.phases;
    j["eliminated"] = v.eliminated;
    j["losses"] = v.losses;
    j["logoColor"] = v.logoColor;
    j["captainId"] = v.captainId;
    j["members"] = v.members;
  }
  static void from_json(const json& j, RosterDTO& v) { 
    v.logo = j.at("logo").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.dynamicState = j.at("dynamicState").get<RosterDynamicStateDTO>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.tier = j.at("tier").get<int32_t>(); 
    v.phases = j.at("phases").get<std::vector<PhaseRosterDTO>>(); 
    v.eliminated = j.at("eliminated").get<bool>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.captainId = j.at("captainId").get<uint64_t>(); 
    v.members = j.at("members").get<std::vector<RosterMemberDTO>>(); 
  }
} 