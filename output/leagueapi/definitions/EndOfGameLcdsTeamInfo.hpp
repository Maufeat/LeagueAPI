#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/EndOfGameLcdsTeamId.hpp>"

namespace leagueapi {
  struct EndOfGameLcdsTeamInfo { /**/ 
    EndOfGameLcdsTeamId teamId;/**/
    std::string tag;/**/
    int64_t secondsUntilEligibleForDeletion;/**/
    std::string memberStatusString;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const EndOfGameLcdsTeamInfo& v) { 
    j["teamId"] = v.teamId;
    j["tag"] = v.tag;
    j["secondsUntilEligibleForDeletion"] = v.secondsUntilEligibleForDeletion;
    j["memberStatusString"] = v.memberStatusString;
    j["name"] = v.name;
  }
  static void from_json(const json& j, EndOfGameLcdsTeamInfo& v) { 
    v.teamId = j.at("teamId").get<EndOfGameLcdsTeamId>(); 
    v.tag = j.at("tag").get<std::string>(); 
    v.secondsUntilEligibleForDeletion = j.at("secondsUntilEligibleForDeletion").get<int64_t>(); 
    v.memberStatusString = j.at("memberStatusString").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 