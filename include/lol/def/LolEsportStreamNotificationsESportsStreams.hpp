#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsESportsStreams { 
    std::string teamBLogoUrl;
    int64_t teamAId;
    std::string teamALogoUrl;
    std::string title;
    std::string teamAName;
    int64_t teamBId;
    std::string teamBGuid;
    std::string teamBName;
    std::string teamAGuid;
    std::string teamBAcronym;
    std::string tournamentDescription;
    std::string teamAAcronym; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsESportsStreams& v) {
    j["teamBLogoUrl"] = v.teamBLogoUrl; 
    j["teamAId"] = v.teamAId; 
    j["teamALogoUrl"] = v.teamALogoUrl; 
    j["title"] = v.title; 
    j["teamAName"] = v.teamAName; 
    j["teamBId"] = v.teamBId; 
    j["teamBGuid"] = v.teamBGuid; 
    j["teamBName"] = v.teamBName; 
    j["teamAGuid"] = v.teamAGuid; 
    j["teamBAcronym"] = v.teamBAcronym; 
    j["tournamentDescription"] = v.tournamentDescription; 
    j["teamAAcronym"] = v.teamAAcronym; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsESportsStreams& v) {
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>(); 
    v.teamAId = j.at("teamAId").get<int64_t>(); 
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.teamAName = j.at("teamAName").get<std::string>(); 
    v.teamBId = j.at("teamBId").get<int64_t>(); 
    v.teamBGuid = j.at("teamBGuid").get<std::string>(); 
    v.teamBName = j.at("teamBName").get<std::string>(); 
    v.teamAGuid = j.at("teamAGuid").get<std::string>(); 
    v.teamBAcronym = j.at("teamBAcronym").get<std::string>(); 
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>(); 
    v.teamAAcronym = j.at("teamAAcronym").get<std::string>(); 
  }
}