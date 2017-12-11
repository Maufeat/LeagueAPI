#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyLobbyBotDifficulty { /**/ 
    EASY_e = 0, /**/ 
    HARD_e = 2, /**/ 
    INTRO_e = 5, /**/ 
    MEDIUM_e = 1, /**/ 
    NONE_e = -1, /**/ 
    TUTORIAL_e = 4, /**/ 
    UBER_e = 3, /**/ 
  };
  static void to_json(json& j, const LolLobbyLobbyBotDifficulty& v) {
    switch(v) { 
    case LolLobbyLobbyBotDifficulty::EASY_e:
      j = "EASY";
    break;
    case LolLobbyLobbyBotDifficulty::HARD_e:
      j = "HARD";
    break;
    case LolLobbyLobbyBotDifficulty::INTRO_e:
      j = "INTRO";
    break;
    case LolLobbyLobbyBotDifficulty::MEDIUM_e:
      j = "MEDIUM";
    break;
    case LolLobbyLobbyBotDifficulty::NONE_e:
      j = "NONE";
    break;
    case LolLobbyLobbyBotDifficulty::TUTORIAL_e:
      j = "TUTORIAL";
    break;
    case LolLobbyLobbyBotDifficulty::UBER_e:
      j = "UBER";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyLobbyBotDifficulty& v) {
    auto s = j.get<std::string>(); 
    if(s == "EASY") {
      v = LolLobbyLobbyBotDifficulty::EASY_e;
      return;
    } 
    if(s == "HARD") {
      v = LolLobbyLobbyBotDifficulty::HARD_e;
      return;
    } 
    if(s == "INTRO") {
      v = LolLobbyLobbyBotDifficulty::INTRO_e;
      return;
    } 
    if(s == "MEDIUM") {
      v = LolLobbyLobbyBotDifficulty::MEDIUM_e;
      return;
    } 
    if(s == "NONE") {
      v = LolLobbyLobbyBotDifficulty::NONE_e;
      return;
    } 
    if(s == "TUTORIAL") {
      v = LolLobbyLobbyBotDifficulty::TUTORIAL_e;
      return;
    } 
    if(s == "UBER") {
      v = LolLobbyLobbyBotDifficulty::UBER_e;
      return;
    } 
  }
} 