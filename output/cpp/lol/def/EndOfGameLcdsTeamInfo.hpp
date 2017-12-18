#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/EndOfGameLcdsTeamId.hpp>
namespace lol {
  struct EndOfGameLcdsTeamInfo { 
    std::string tag;
    std::string memberStatusString;
    std::string name;
    int64_t secondsUntilEligibleForDeletion;
    EndOfGameLcdsTeamId teamId; 
  };
  inline void to_json(json& j, const EndOfGameLcdsTeamInfo& v) {
    j["tag"] = v.tag; 
    j["memberStatusString"] = v.memberStatusString; 
    j["name"] = v.name; 
    j["secondsUntilEligibleForDeletion"] = v.secondsUntilEligibleForDeletion; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, EndOfGameLcdsTeamInfo& v) {
    v.tag = j.at("tag").get<std::string>(); 
    v.memberStatusString = j.at("memberStatusString").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.secondsUntilEligibleForDeletion = j.at("secondsUntilEligibleForDeletion").get<int64_t>(); 
    v.teamId = j.at("teamId").get<EndOfGameLcdsTeamId>(); 
  }
}