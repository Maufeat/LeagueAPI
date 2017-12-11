#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/CollectionsLcdsMasteryBookDTO.hpp>"
#include "<leagueapi/definitions/CollectionsLcdsSpellBookDTO.hpp>"

namespace leagueapi {
  struct LolCollectionsSummonerData { /**/ 
    CollectionsLcdsSpellBookDTO spellBook;/**/
    CollectionsLcdsMasteryBookDTO masteryBook;/**/
  };
  static void to_json(json& j, const LolCollectionsSummonerData& v) { 
    j["spellBook"] = v.spellBook;
    j["masteryBook"] = v.masteryBook;
  }
  static void from_json(const json& j, LolCollectionsSummonerData& v) { 
    v.spellBook = j.at("spellBook").get<CollectionsLcdsSpellBookDTO>(); 
    v.masteryBook = j.at("masteryBook").get<CollectionsLcdsMasteryBookDTO>(); 
  }
} 