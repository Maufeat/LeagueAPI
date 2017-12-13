#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsPlayerParticipant { 
    std::string summonerInternalName;
    int32_t botSkillLevel;
    std::string summonerName;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LcdsPlayerParticipant& v) {
    j["summonerInternalName"] = v.summonerInternalName; 
    j["botSkillLevel"] = v.botSkillLevel; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LcdsPlayerParticipant& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}