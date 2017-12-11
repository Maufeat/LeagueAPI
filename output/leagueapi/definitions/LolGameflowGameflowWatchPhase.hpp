#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGameflowGameflowWatchPhase { /**/ 
    None_e = 0, /**/ 
    WatchFailedToLaunch_e = 3, /**/ 
    WatchInProgress_e = 2, /**/ 
    WatchStarted_e = 1, /**/ 
  };
  static void to_json(json& j, const LolGameflowGameflowWatchPhase& v) {
    switch(v) { 
    case LolGameflowGameflowWatchPhase::None_e:
      j = "None";
    break;
    case LolGameflowGameflowWatchPhase::WatchFailedToLaunch_e:
      j = "WatchFailedToLaunch";
    break;
    case LolGameflowGameflowWatchPhase::WatchInProgress_e:
      j = "WatchInProgress";
    break;
    case LolGameflowGameflowWatchPhase::WatchStarted_e:
      j = "WatchStarted";
    break;
    };
  }
  static void from_json(const json& j, LolGameflowGameflowWatchPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "None") {
      v = LolGameflowGameflowWatchPhase::None_e;
      return;
    } 
    if(s == "WatchFailedToLaunch") {
      v = LolGameflowGameflowWatchPhase::WatchFailedToLaunch_e;
      return;
    } 
    if(s == "WatchInProgress") {
      v = LolGameflowGameflowWatchPhase::WatchInProgress_e;
      return;
    } 
    if(s == "WatchStarted") {
      v = LolGameflowGameflowWatchPhase::WatchStarted_e;
      return;
    } 
  }
} 