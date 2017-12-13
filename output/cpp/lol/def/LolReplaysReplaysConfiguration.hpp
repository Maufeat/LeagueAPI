#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolReplaysReplaysConfiguration { 
    bool isPatching;
    bool isReplaysForEndOfGameEnabled;
    bool isReplaysForMatchHistoryEnabled;
    bool isLoggedIn;
    bool isPlayingReplay;
    bool isReplaysEnabled;
    double minutesUntilReplayConsideredLost;
    std::string gameVersion;
    bool isPlayingGame;
    std::string minServerVersion; 
  };
  void to_json(json& j, const LolReplaysReplaysConfiguration& v) {
  j["isPatching"] = v.isPatching; 
  j["isReplaysForEndOfGameEnabled"] = v.isReplaysForEndOfGameEnabled; 
  j["isReplaysForMatchHistoryEnabled"] = v.isReplaysForMatchHistoryEnabled; 
  j["isLoggedIn"] = v.isLoggedIn; 
  j["isPlayingReplay"] = v.isPlayingReplay; 
  j["isReplaysEnabled"] = v.isReplaysEnabled; 
  j["minutesUntilReplayConsideredLost"] = v.minutesUntilReplayConsideredLost; 
  j["gameVersion"] = v.gameVersion; 
  j["isPlayingGame"] = v.isPlayingGame; 
  j["minServerVersion"] = v.minServerVersion; 
  }
  void from_json(const json& j, LolReplaysReplaysConfiguration& v) {
  v.isPatching = j.at("isPatching").get<bool>(); 
  v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>(); 
  v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>(); 
  v.isLoggedIn = j.at("isLoggedIn").get<bool>(); 
  v.isPlayingReplay = j.at("isPlayingReplay").get<bool>(); 
  v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>(); 
  v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>(); 
  v.gameVersion = j.at("gameVersion").get<std::string>(); 
  v.isPlayingGame = j.at("isPlayingGame").get<bool>(); 
  v.minServerVersion = j.at("minServerVersion").get<std::string>(); 
  }
}