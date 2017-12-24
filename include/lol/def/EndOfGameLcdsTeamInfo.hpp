#pragma once
#include "../base_def.hpp" 
#include "EndOfGameLcdsTeamId.hpp"
namespace lol {
  struct EndOfGameLcdsTeamInfo { 
    std::string memberStatusString;
    std::string tag;
    std::string name;
    int64_t secondsUntilEligibleForDeletion;
    EndOfGameLcdsTeamId teamId; 
  };
  inline void to_json(json& j, const EndOfGameLcdsTeamInfo& v) {
    j["memberStatusString"] = v.memberStatusString; 
    j["tag"] = v.tag; 
    j["name"] = v.name; 
    j["secondsUntilEligibleForDeletion"] = v.secondsUntilEligibleForDeletion; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, EndOfGameLcdsTeamInfo& v) {
    v.memberStatusString = j.at("memberStatusString").get<std::string>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.secondsUntilEligibleForDeletion = j.at("secondsUntilEligibleForDeletion").get<int64_t>(); 
    v.teamId = j.at("teamId").get<EndOfGameLcdsTeamId>(); 
  }
}