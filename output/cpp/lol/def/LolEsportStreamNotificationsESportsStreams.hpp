#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEsportStreamNotificationsESportsStreams { 
    std::string teamAGuid;
    std::string title;
    std::string teamAName;
    std::string teamBLogoUrl;
    std::string teamAAcronym;
    std::string teamBName;
    std::string teamALogoUrl;
    std::string teamBAcronym;
    std::string tournamentDescription;
    int64_t teamAId;
    int64_t teamBId;
    std::string teamBGuid; 
  };
  void to_json(json& j, const LolEsportStreamNotificationsESportsStreams& v) {
  j["teamAGuid"] = v.teamAGuid; 
  j["title"] = v.title; 
  j["teamAName"] = v.teamAName; 
  j["teamBLogoUrl"] = v.teamBLogoUrl; 
  j["teamAAcronym"] = v.teamAAcronym; 
  j["teamBName"] = v.teamBName; 
  j["teamALogoUrl"] = v.teamALogoUrl; 
  j["teamBAcronym"] = v.teamBAcronym; 
  j["tournamentDescription"] = v.tournamentDescription; 
  j["teamAId"] = v.teamAId; 
  j["teamBId"] = v.teamBId; 
  j["teamBGuid"] = v.teamBGuid; 
  }
  void from_json(const json& j, LolEsportStreamNotificationsESportsStreams& v) {
  v.teamAGuid = j.at("teamAGuid").get<std::string>(); 
  v.title = j.at("title").get<std::string>(); 
  v.teamAName = j.at("teamAName").get<std::string>(); 
  v.teamBLogoUrl = j.at("teamBLogoUrl").get<std::string>(); 
  v.teamAAcronym = j.at("teamAAcronym").get<std::string>(); 
  v.teamBName = j.at("teamBName").get<std::string>(); 
  v.teamALogoUrl = j.at("teamALogoUrl").get<std::string>(); 
  v.teamBAcronym = j.at("teamBAcronym").get<std::string>(); 
  v.tournamentDescription = j.at("tournamentDescription").get<std::string>(); 
  v.teamAId = j.at("teamAId").get<int64_t>(); 
  v.teamBId = j.at("teamBId").get<int64_t>(); 
  v.teamBGuid = j.at("teamBGuid").get<std::string>(); 
  }
}