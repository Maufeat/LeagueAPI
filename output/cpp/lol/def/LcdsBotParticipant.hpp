#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsBotParticipant { 
    std::string summonerInternalName;
    int32_t botSkillLevel;
    std::string summonerName;
    std::string teamId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LcdsBotParticipant& v) {
    j["summonerInternalName"] = v.summonerInternalName; 
    j["botSkillLevel"] = v.botSkillLevel; 
    j["summonerName"] = v.summonerName; 
    j["teamId"] = v.teamId; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LcdsBotParticipant& v) {
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.botSkillLevel = j.at("botSkillLevel").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.teamId = j.at("teamId").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}