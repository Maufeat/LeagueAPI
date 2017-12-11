#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class RemotingHelpFormat { /*Help format for remoting functions and types.*/ 
    Brief_e = 4, /*Short description format*/ 
    Console_e = 5, /*Console-friendly description format*/ 
    Epytext_e = 2, /*Python epytext format*/ 
    Full_e = 1, /*Native help format*/ 
  };
  static void to_json(json& j, const RemotingHelpFormat& v) {
    switch(v) { 
    case RemotingHelpFormat::Brief_e:
      j = "Brief";
    break;
    case RemotingHelpFormat::Console_e:
      j = "Console";
    break;
    case RemotingHelpFormat::Epytext_e:
      j = "Epytext";
    break;
    case RemotingHelpFormat::Full_e:
      j = "Full";
    break;
    };
  }
  static void from_json(const json& j, RemotingHelpFormat& v) {
    auto s = j.get<std::string>(); 
    if(s == "Brief") {
      v = RemotingHelpFormat::Brief_e;
      return;
    } 
    if(s == "Console") {
      v = RemotingHelpFormat::Console_e;
      return;
    } 
    if(s == "Epytext") {
      v = RemotingHelpFormat::Epytext_e;
      return;
    } 
    if(s == "Full") {
      v = RemotingHelpFormat::Full_e;
      return;
    } 
  }
} 