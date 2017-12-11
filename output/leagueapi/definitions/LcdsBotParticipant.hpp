#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LcdsBotParticipant { /**/ 
    std::string teamId;/**/
    std::string summonerName;/**/
    int32_t botSkillLevel;/**/
    uint64_t summonerId;/**/
    std::string summonerInternalName;/**/
  };
  static void to_json(json& j, const LcdsBotParticipant& v) { 
    j["teamId"] = v.teamId;
    j["summonerName"] = v.summonerName;
    j["botSkillLevel"] = v.botSkillLevel;
    j["summonerId"] = v.summonerId;
    j["summonerInternalName"] = v.summonerInternalName;
  }
  static void from_json(const json& j, LcdsBotParticipant& v) { 
    v.teamId = j.at("teamId").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
  }
} 