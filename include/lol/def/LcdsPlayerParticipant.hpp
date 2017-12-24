#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LcdsPlayerParticipant { 
    uint64_t summonerId;
    std::string summonerName;
    int32_t botSkillLevel;
    std::string summonerInternalName; 
  };
  inline void to_json(json& j, const LcdsPlayerParticipant& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
    j["botSkillLevel"] = v.botSkillLevel; 
    j["summonerInternalName"] = v.summonerInternalName; 
  }
  inline void from_json(const json& j, LcdsPlayerParticipant& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
  }
}