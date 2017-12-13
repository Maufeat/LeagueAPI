#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyQueueAvailability {  
    Available_e = 0,
    DoesntMeetRequirements_e = 2,
    PlatformDisabled_e = 1,
  };
  void to_json(json& j, const LolLobbyQueueAvailability& v) {
  if(v == LolLobbyQueueAvailability::Available_e) {
    j = "Available";
    return;
  }
  if(v == LolLobbyQueueAvailability::DoesntMeetRequirements_e) {
    j = "DoesntMeetRequirements";
    return;
  }
  if(v == LolLobbyQueueAvailability::PlatformDisabled_e) {
    j = "PlatformDisabled";
    return;
  }
  }
  void from_json(const json& j, LolLobbyQueueAvailability& v) {
  if(j.get<std::string>() == "Available") {
    v = LolLobbyQueueAvailability::Available_e;
    return;
  } 
  if(j.get<std::string>() == "DoesntMeetRequirements") {
    v = LolLobbyQueueAvailability::DoesntMeetRequirements_e;
    return;
  } 
  if(j.get<std::string>() == "PlatformDisabled") {
    v = LolLobbyQueueAvailability::PlatformDisabled_e;
    return;
  } 
  }
}