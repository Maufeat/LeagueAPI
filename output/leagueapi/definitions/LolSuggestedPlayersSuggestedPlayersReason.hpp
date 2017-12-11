#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolSuggestedPlayersSuggestedPlayersReason { /**/ 
    FriendOfFriend_e = 3, /**/ 
    LegacyPlayAgain_e = 9999, /**/ 
    OnlineFriend_e = 2, /**/ 
    PreviousPremade_e = 1, /**/ 
    VictoriousComrade_e = 5, /**/ 
  };
  static void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersReason& v) {
    switch(v) { 
    case LolSuggestedPlayersSuggestedPlayersReason::FriendOfFriend_e:
      j = "FriendOfFriend";
    break;
    case LolSuggestedPlayersSuggestedPlayersReason::LegacyPlayAgain_e:
      j = "LegacyPlayAgain";
    break;
    case LolSuggestedPlayersSuggestedPlayersReason::OnlineFriend_e:
      j = "OnlineFriend";
    break;
    case LolSuggestedPlayersSuggestedPlayersReason::PreviousPremade_e:
      j = "PreviousPremade";
    break;
    case LolSuggestedPlayersSuggestedPlayersReason::VictoriousComrade_e:
      j = "VictoriousComrade";
    break;
    };
  }
  static void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersReason& v) {
    auto s = j.get<std::string>(); 
    if(s == "FriendOfFriend") {
      v = LolSuggestedPlayersSuggestedPlayersReason::FriendOfFriend_e;
      return;
    } 
    if(s == "LegacyPlayAgain") {
      v = LolSuggestedPlayersSuggestedPlayersReason::LegacyPlayAgain_e;
      return;
    } 
    if(s == "OnlineFriend") {
      v = LolSuggestedPlayersSuggestedPlayersReason::OnlineFriend_e;
      return;
    } 
    if(s == "PreviousPremade") {
      v = LolSuggestedPlayersSuggestedPlayersReason::PreviousPremade_e;
      return;
    } 
    if(s == "VictoriousComrade") {
      v = LolSuggestedPlayersSuggestedPlayersReason::VictoriousComrade_e;
      return;
    } 
  }
} 