#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLicenseAgreementLicenseAgreement.hpp"
namespace lol {
  inline Result<std::vector<LolLicenseAgreementLicenseAgreement>> GetLolLicenseAgreementV1Agreements(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolLicenseAgreementLicenseAgreement>> {
        _client.https.request("get", "/lol-license-agreement/v1/agreements?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLicenseAgreementLicenseAgreement>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolLicenseAgreementV1Agreements(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolLicenseAgreementLicenseAgreement>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-license-agreement/v1/agreements?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolLicenseAgreementLicenseAgreement>> { response });
          else
            cb(_client,Result<std::vector<LolLicenseAgreementLicenseAgreement>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}