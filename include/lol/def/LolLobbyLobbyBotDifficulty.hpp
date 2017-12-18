#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLobbyLobbyBotDifficulty {  
    EASY_e = 0,
    HARD_e = 2,
    INTRO_e = 5,
    MEDIUM_e = 1,
    NONE_e = -1,
    TUTORIAL_e = 4,
    UBER_e = 3,
  };
  inline void to_json(json& j, const LolLobbyLobbyBotDifficulty& v) {
    if(v == LolLobbyLobbyBotDifficulty::EASY_e) {
      j = "EASY";
      return;
    }
    if(v == LolLobbyLobbyBotDifficulty::HARD_e) {
      j = "HARD";
      return;
    }
    if(v == LolLobbyLobbyBotDifficulty::INTRO_e) {
      j = "INTRO";
      return;
    }
    if(v == LolLobbyLobbyBotDifficulty::MEDIUM_e) {
      j = "MEDIUM";
      return;
    }
    if(v == LolLobbyLobbyBotDifficulty::NONE_e) {
      j = "NONE";
      return;
    }
    if(v == LolLobbyLobbyBotDifficulty::TUTORIAL_e) {
      j = "TUTORIAL";
      return;
    }
    if(v == LolLobbyLobbyBotDifficulty::UBER_e) {
      j = "UBER";
      return;
    }
  }
  inline void from_json(const json& j, LolLobbyLobbyBotDifficulty& v) {
    if(j.get<std::string>() == "EASY") {
      v = LolLobbyLobbyBotDifficulty::EASY_e;
      return;
    } 
    if(j.get<std::string>() == "HARD") {
      v = LolLobbyLobbyBotDifficulty::HARD_e;
      return;
    } 
    if(j.get<std::string>() == "INTRO") {
      v = LolLobbyLobbyBotDifficulty::INTRO_e;
      return;
    } 
    if(j.get<std::string>() == "MEDIUM") {
      v = LolLobbyLobbyBotDifficulty::MEDIUM_e;
      return;
    } 
    if(j.get<std::string>() == "NONE") {
      v = LolLobbyLobbyBotDifficulty::NONE_e;
      return;
    } 
    if(j.get<std::string>() == "TUTORIAL") {
      v = LolLobbyLobbyBotDifficulty::TUTORIAL_e;
      return;
    } 
    if(j.get<std::string>() == "UBER") {
      v = LolLobbyLobbyBotDifficulty::UBER_e;
      return;
    } 
  }
}