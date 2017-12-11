#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEsportStreamNotificationsESportsStreams { /**/ 
    std::string teamBName;/**/
    std::string teamAGuid;/**/
    std::string teamAName;/**/
    std::string teamAAcronym;/**/
    std::string teamBAcronym;/**/
    std::string teamBGuid;/**/
    std::string teamALogoUrl;/**/
    std::string tournamentDescription;/**/
    std::string teamBLogoUrl;/**/
    std::string title;/**/
    int64_t teamAId;/**/
    int64_t teamBId;/**/
  };
  static void to_json(json& j, const LolEsportStreamNotificationsESportsStreams& v) { 
    j["teamBName"] = v.teamBName;
    j["teamAGuid"] = v.teamAGuid;
    j["teamAName"] = v.teamAName;
    j["teamAAcronym"] = v.teamAAcronym;
    j["teamBAcronym"] = v.teamBAcronym;
    j["teamBGuid"] = v.teamBGuid;
    j["teamALogoUrl"] = v.teamALogoUrl;
    j["tournamentDescription"] = v.tournamentDescription;
    j["teamBLogoUrl"] = v.teamBLogoUrl;
    j["title"] = v.title;
    j["teamAId"] = v.teamAId;
    j["teamBId"] = v.teamBId;
  }
  static void from_json(const json& j, LolEsportStreamNotificationsESportsStreams& v) { 
    v.teamBName = j.at("teamBName").get<std::string>(); 
    v.teamAGuid = j.at("teamAGuid").get<std::string>(); 
    v.teamAName = j.at("teamAName").get<std::string>(); 
    v.teamAAcronym = j.at("teamAAcronym").get<std::string>(); 
    v.teamBAcronym = j.at("teamBAcronym").get<std::string>(); 
    v.teamBGuid = j.at("teamBGuid").get<std::string>(); 
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>(); 
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>(); 
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.teamAId = j.at("teamAId").get<int64_t>(); 
    v.teamBId = j.at("teamBId").get<int64_t>(); 
  }
} 