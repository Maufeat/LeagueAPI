#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsESportsStreams { 
    int64_t teamAId;
    std::string teamAGuid;
    std::string teamBAcronym;
    std::string title;
    std::string teamAAcronym;
    std::string teamALogoUrl;
    std::string teamAName;
    int64_t teamBId;
    std::string teamBLogoUrl;
    std::string tournamentDescription;
    std::string teamBName;
    std::string teamBGuid; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsESportsStreams& v) {
    j["teamAId"] = v.teamAId; 
    j["teamAGuid"] = v.teamAGuid; 
    j["teamBAcronym"] = v.teamBAcronym; 
    j["title"] = v.title; 
    j["teamAAcronym"] = v.teamAAcronym; 
    j["teamALogoUrl"] = v.teamALogoUrl; 
    j["teamAName"] = v.teamAName; 
    j["teamBId"] = v.teamBId; 
    j["teamBLogoUrl"] = v.teamBLogoUrl; 
    j["tournamentDescription"] = v.tournamentDescription; 
    j["teamBName"] = v.teamBName; 
    j["teamBGuid"] = v.teamBGuid; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsESportsStreams& v) {
    v.teamAId = j.at("teamAId").get<int64_t>(); 
    v.teamAGuid = j.at("teamAGuid").get<std::string>(); 
    v.teamBAcronym = j.at("teamBAcronym").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.teamAAcronym = j.at("teamAAcronym").get<std::string>(); 
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>(); 
    v.teamAName = j.at("teamAName").get<std::string>(); 
    v.teamBId = j.at("teamBId").get<int64_t>(); 
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>(); 
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>(); 
    v.teamBName = j.at("teamBName").get<std::string>(); 
    v.teamBGuid = j.at("teamBGuid").get<std::string>(); 
  }
}