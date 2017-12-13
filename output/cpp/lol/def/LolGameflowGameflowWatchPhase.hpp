#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolGameflowGameflowWatchPhase {  
    None_e = 0,
    WatchFailedToLaunch_e = 3,
    WatchInProgress_e = 2,
    WatchStarted_e = 1,
  };
  void to_json(json& j, const LolGameflowGameflowWatchPhase& v) {
    if(v == LolGameflowGameflowWatchPhase::None_e) {
      j = "None";
      return;
    }
    if(v == LolGameflowGameflowWatchPhase::WatchFailedToLaunch_e) {
      j = "WatchFailedToLaunch";
      return;
    }
    if(v == LolGameflowGameflowWatchPhase::WatchInProgress_e) {
      j = "WatchInProgress";
      return;
    }
    if(v == LolGameflowGameflowWatchPhase::WatchStarted_e) {
      j = "WatchStarted";
      return;
    }
  }
  void from_json(const json& j, LolGameflowGameflowWatchPhase& v) {
    if(j.get<std::string>() == "None") {
      v = LolGameflowGameflowWatchPhase::None_e;
      return;
    } 
    if(j.get<std::string>() == "WatchFailedToLaunch") {
      v = LolGameflowGameflowWatchPhase::WatchFailedToLaunch_e;
      return;
    } 
    if(j.get<std::string>() == "WatchInProgress") {
      v = LolGameflowGameflowWatchPhase::WatchInProgress_e;
      return;
    } 
    if(j.get<std::string>() == "WatchStarted") {
      v = LolGameflowGameflowWatchPhase::WatchStarted_e;
      return;
    } 
  }
}