#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsESportsStreams { 
    std::string title;
    std::string tournamentDescription;
    std::string teamAGuid;
    int64_t teamAId;
    std::string teamBGuid;
    int64_t teamBId;
    std::string teamAName;
    std::string teamBName;
    std::string teamAAcronym;
    std::string teamBAcronym;
    std::string teamALogoUrl;
    std::string teamBLogoUrl; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsESportsStreams& v) {
    j["title"] = v.title; 
    j["tournamentDescription"] = v.tournamentDescription; 
    j["teamAGuid"] = v.teamAGuid; 
    j["teamAId"] = v.teamAId; 
    j["teamBGuid"] = v.teamBGuid; 
    j["teamBId"] = v.teamBId; 
    j["teamAName"] = v.teamAName; 
    j["teamBName"] = v.teamBName; 
    j["teamAAcronym"] = v.teamAAcronym; 
    j["teamBAcronym"] = v.teamBAcronym; 
    j["teamALogoUrl"] = v.teamALogoUrl; 
    j["teamBLogoUrl"] = v.teamBLogoUrl; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsESportsStreams& v) {
    v.title = j.at("title").get<std::string>(); 
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>(); 
    v.teamAGuid = j.at("teamAGuid").get<std::string>(); 
    v.teamAId = j.at("teamAId").get<int64_t>(); 
    v.teamBGuid = j.at("teamBGuid").get<std::string>(); 
    v.teamBId = j.at("teamBId").get<int64_t>(); 
    v.teamAName = j.at("teamAName").get<std::string>(); 
    v.teamBName = j.at("teamBName").get<std::string>(); 
    v.teamAAcronym = j.at("teamAAcronym").get<std::string>(); 
    v.teamBAcronym = j.at("teamBAcronym").get<std::string>(); 
    v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>(); 
    v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>(); 
  }
}