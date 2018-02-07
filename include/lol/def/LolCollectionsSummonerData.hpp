#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsMasteryBookDTO.hpp"
#include "CollectionsLcdsSpellBookDTO.hpp"
namespace lol {
  struct LolCollectionsSummonerData { 
    CollectionsLcdsSpellBookDTO spellBook;
    CollectionsLcdsMasteryBookDTO masteryBook; 
  };
  inline void to_json(json& j, const LolCollectionsSummonerData& v) {
    j["spellBook"] = v.spellBook; 
    j["masteryBook"] = v.masteryBook; 
  }
  inline void from_json(const json& j, LolCollectionsSummonerData& v) {
    v.spellBook = j.at("spellBook").get<CollectionsLcdsSpellBookDTO>(); 
    v.masteryBook = j.at("masteryBook").get<CollectionsLcdsMasteryBookDTO>(); 
  }
}