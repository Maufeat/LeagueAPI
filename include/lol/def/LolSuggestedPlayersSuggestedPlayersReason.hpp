#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolSuggestedPlayersSuggestedPlayersReason {  
    FriendOfFriend_e = 3,
    LegacyPlayAgain_e = 9999,
    OnlineFriend_e = 2,
    PreviousPremade_e = 1,
    VictoriousComrade_e = 5,
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersReason& v) {
    if(v == LolSuggestedPlayersSuggestedPlayersReason::FriendOfFriend_e) {
      j = "FriendOfFriend";
      return;
    }
    if(v == LolSuggestedPlayersSuggestedPlayersReason::LegacyPlayAgain_e) {
      j = "LegacyPlayAgain";
      return;
    }
    if(v == LolSuggestedPlayersSuggestedPlayersReason::OnlineFriend_e) {
      j = "OnlineFriend";
      return;
    }
    if(v == LolSuggestedPlayersSuggestedPlayersReason::PreviousPremade_e) {
      j = "PreviousPremade";
      return;
    }
    if(v == LolSuggestedPlayersSuggestedPlayersReason::VictoriousComrade_e) {
      j = "VictoriousComrade";
      return;
    }
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersReason& v) {
    if(j.get<std::string>() == "FriendOfFriend") {
      v = LolSuggestedPlayersSuggestedPlayersReason::FriendOfFriend_e;
      return;
    } 
    if(j.get<std::string>() == "LegacyPlayAgain") {
      v = LolSuggestedPlayersSuggestedPlayersReason::LegacyPlayAgain_e;
      return;
    } 
    if(j.get<std::string>() == "OnlineFriend") {
      v = LolSuggestedPlayersSuggestedPlayersReason::OnlineFriend_e;
      return;
    } 
    if(j.get<std::string>() == "PreviousPremade") {
      v = LolSuggestedPlayersSuggestedPlayersReason::PreviousPremade_e;
      return;
    } 
    if(j.get<std::string>() == "VictoriousComrade") {
      v = LolSuggestedPlayersSuggestedPlayersReason::VictoriousComrade_e;
      return;
    } 
  }
}