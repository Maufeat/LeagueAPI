#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LcdsPlayerParticipant { /**/ 
    std::string summonerName;/**/
    int32_t botSkillLevel;/**/
    uint64_t summonerId;/**/
    std::string summonerInternalName;/**/
  };
  static void to_json(json& j, const LcdsPlayerParticipant& v) { 
    j["summonerName"] = v.summonerName;
    j["botSkillLevel"] = v.botSkillLevel;
    j["summonerId"] = v.summonerId;
    j["summonerInternalName"] = v.summonerInternalName;
  }
  static void from_json(const json& j, LcdsPlayerParticipant& v) { 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
  }
} 