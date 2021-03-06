// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

#include "DBReport-odb.hpp"

#include <cassert>
#include <cstring>  // std::memcpy

#include <odb/schema-catalog-impl.hxx>

#include <odb/sqlite/traits.hxx>
#include <odb/sqlite/database.hxx>
#include <odb/sqlite/transaction.hxx>
#include <odb/sqlite/connection.hxx>
#include <odb/sqlite/statement.hxx>
#include <odb/sqlite/statement-cache.hxx>
#include <odb/sqlite/simple-object-statements.hxx>
#include <odb/sqlite/container-statements.hxx>
#include <odb/sqlite/exceptions.hxx>
#include <odb/sqlite/simple-object-result.hxx>

namespace odb
{
  // DBReport
  //

  struct access::object_traits_impl< ::DBReport, id_sqlite >::extra_statement_cache_type
  {
    extra_statement_cache_type (
      sqlite::connection&,
      image_type&,
      id_image_type&,
      sqlite::binding&,
      sqlite::binding&)
    {
    }
  };

  access::object_traits_impl< ::DBReport, id_sqlite >::id_type
  access::object_traits_impl< ::DBReport, id_sqlite >::
  id (const image_type& i)
  {
    sqlite::database* db (0);
    ODB_POTENTIALLY_UNUSED (db);

    id_type id;
    {
      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_value (
        id,
        i.millis_value,
        i.millis_null);
    }

    return id;
  }

  bool access::object_traits_impl< ::DBReport, id_sqlite >::
  grow (image_type& i,
        bool* t)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (t);

    bool grew (false);

    // millis
    //
    t[0UL] = false;

    // user_id
    //
    t[1UL] = false;

    // power
    //
    t[2UL] = false;

    // lat
    //
    t[3UL] = false;

    // lng
    //
    t[4UL] = false;

    return grew;
  }

  void access::object_traits_impl< ::DBReport, id_sqlite >::
  bind (sqlite::bind* b,
        image_type& i,
        sqlite::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace sqlite;

    std::size_t n (0);

    // millis
    //
    if (sk != statement_update)
    {
      b[n].type = sqlite::bind::integer;
      b[n].buffer = &i.millis_value;
      b[n].is_null = &i.millis_null;
      n++;
    }

    // user_id
    //
    b[n].type = sqlite::bind::integer;
    b[n].buffer = &i.user_id_value;
    b[n].is_null = &i.user_id_null;
    n++;

    // power
    //
    b[n].type = sqlite::bind::integer;
    b[n].buffer = &i.power_value;
    b[n].is_null = &i.power_null;
    n++;

    // lat
    //
    b[n].type = sqlite::bind::real;
    b[n].buffer = &i.lat_value;
    b[n].is_null = &i.lat_null;
    n++;

    // lng
    //
    b[n].type = sqlite::bind::real;
    b[n].buffer = &i.lng_value;
    b[n].is_null = &i.lng_null;
    n++;
  }

  void access::object_traits_impl< ::DBReport, id_sqlite >::
  bind (sqlite::bind* b, id_image_type& i)
  {
    std::size_t n (0);
    b[n].type = sqlite::bind::integer;
    b[n].buffer = &i.id_value;
    b[n].is_null = &i.id_null;
  }

  bool access::object_traits_impl< ::DBReport, id_sqlite >::
  init (image_type& i,
        const object_type& o,
        sqlite::statement_kind sk)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (sk);

    using namespace sqlite;

    bool grew (false);

    // millis
    //
    if (sk == statement_insert)
    {
      long int const& v =
        o.millis;

      bool is_null (false);
      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_image (
        i.millis_value,
        is_null,
        v);
      i.millis_null = is_null;
    }

    // user_id
    //
    {
      int const& v =
        o.user_id;

      bool is_null (false);
      sqlite::value_traits<
          int,
          sqlite::id_integer >::set_image (
        i.user_id_value,
        is_null,
        v);
      i.user_id_null = is_null;
    }

    // power
    //
    {
      int const& v =
        o.power;

      bool is_null (false);
      sqlite::value_traits<
          int,
          sqlite::id_integer >::set_image (
        i.power_value,
        is_null,
        v);
      i.power_null = is_null;
    }

    // lat
    //
    {
      double const& v =
        o.lat;

      bool is_null (true);
      sqlite::value_traits<
          double,
          sqlite::id_real >::set_image (
        i.lat_value,
        is_null,
        v);
      i.lat_null = is_null;
    }

    // lng
    //
    {
      double const& v =
        o.lng;

      bool is_null (true);
      sqlite::value_traits<
          double,
          sqlite::id_real >::set_image (
        i.lng_value,
        is_null,
        v);
      i.lng_null = is_null;
    }

    return grew;
  }

  void access::object_traits_impl< ::DBReport, id_sqlite >::
  init (object_type& o,
        const image_type& i,
        database* db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // millis
    //
    {
      long int& v =
        o.millis;

      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_value (
        v,
        i.millis_value,
        i.millis_null);
    }

    // user_id
    //
    {
      int& v =
        o.user_id;

      sqlite::value_traits<
          int,
          sqlite::id_integer >::set_value (
        v,
        i.user_id_value,
        i.user_id_null);
    }

    // power
    //
    {
      int& v =
        o.power;

      sqlite::value_traits<
          int,
          sqlite::id_integer >::set_value (
        v,
        i.power_value,
        i.power_null);
    }

    // lat
    //
    {
      double& v =
        o.lat;

      sqlite::value_traits<
          double,
          sqlite::id_real >::set_value (
        v,
        i.lat_value,
        i.lat_null);
    }

    // lng
    //
    {
      double& v =
        o.lng;

      sqlite::value_traits<
          double,
          sqlite::id_real >::set_value (
        v,
        i.lng_value,
        i.lng_null);
    }
  }

  void access::object_traits_impl< ::DBReport, id_sqlite >::
  init (id_image_type& i, const id_type& id)
  {
    {
      bool is_null (false);
      sqlite::value_traits<
          long int,
          sqlite::id_integer >::set_image (
        i.id_value,
        is_null,
        id);
      i.id_null = is_null;
    }
  }

  const char access::object_traits_impl< ::DBReport, id_sqlite >::persist_statement[] =
  "INSERT INTO \"DBReport\" "
  "(\"millis\", "
  "\"user_id\", "
  "\"power\", "
  "\"lat\", "
  "\"lng\") "
  "VALUES "
  "(?, ?, ?, ?, ?)";

  const char access::object_traits_impl< ::DBReport, id_sqlite >::find_statement[] =
  "SELECT "
  "\"DBReport\".\"millis\", "
  "\"DBReport\".\"user_id\", "
  "\"DBReport\".\"power\", "
  "\"DBReport\".\"lat\", "
  "\"DBReport\".\"lng\" "
  "FROM \"DBReport\" "
  "WHERE \"DBReport\".\"millis\"=?";

  const char access::object_traits_impl< ::DBReport, id_sqlite >::update_statement[] =
  "UPDATE \"DBReport\" "
  "SET "
  "\"user_id\"=?, "
  "\"power\"=?, "
  "\"lat\"=?, "
  "\"lng\"=? "
  "WHERE \"millis\"=?";

  const char access::object_traits_impl< ::DBReport, id_sqlite >::erase_statement[] =
  "DELETE FROM \"DBReport\" "
  "WHERE \"millis\"=?";

  const char access::object_traits_impl< ::DBReport, id_sqlite >::query_statement[] =
  "SELECT "
  "\"DBReport\".\"millis\", "
  "\"DBReport\".\"user_id\", "
  "\"DBReport\".\"power\", "
  "\"DBReport\".\"lat\", "
  "\"DBReport\".\"lng\" "
  "FROM \"DBReport\"";

  const char access::object_traits_impl< ::DBReport, id_sqlite >::erase_query_statement[] =
  "DELETE FROM \"DBReport\"";

  const char access::object_traits_impl< ::DBReport, id_sqlite >::table_name[] =
  "\"DBReport\"";

  void access::object_traits_impl< ::DBReport, id_sqlite >::
  persist (database& db, const object_type& obj)
  {
    ODB_POTENTIALLY_UNUSED (db);

    using namespace sqlite;

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    callback (db,
              obj,
              callback_event::pre_persist);

    image_type& im (sts.image ());
    binding& imb (sts.insert_image_binding ());

    if (init (im, obj, statement_insert))
      im.version++;

    if (im.version != sts.insert_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_insert);
      sts.insert_image_version (im.version);
      imb.version++;
    }

    insert_statement& st (sts.persist_statement ());
    if (!st.execute ())
      throw object_already_persistent ();

    callback (db,
              obj,
              callback_event::post_persist);
  }

  void access::object_traits_impl< ::DBReport, id_sqlite >::
  update (database& db, const object_type& obj)
  {
    ODB_POTENTIALLY_UNUSED (db);

    using namespace sqlite;
    using sqlite::update_statement;

    callback (db, obj, callback_event::pre_update);

    sqlite::transaction& tr (sqlite::transaction::current ());
    sqlite::connection& conn (tr.connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    const id_type& id (
      obj.millis);
    id_image_type& idi (sts.id_image ());
    init (idi, id);

    image_type& im (sts.image ());
    if (init (im, obj, statement_update))
      im.version++;

    bool u (false);
    binding& imb (sts.update_image_binding ());
    if (im.version != sts.update_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_update);
      sts.update_image_version (im.version);
      imb.version++;
      u = true;
    }

    binding& idb (sts.id_image_binding ());
    if (idi.version != sts.update_id_image_version () ||
        idb.version == 0)
    {
      if (idi.version != sts.id_image_version () ||
          idb.version == 0)
      {
        bind (idb.bind, idi);
        sts.id_image_version (idi.version);
        idb.version++;
      }

      sts.update_id_image_version (idi.version);

      if (!u)
        imb.version++;
    }

    update_statement& st (sts.update_statement ());
    if (st.execute () == 0)
      throw object_not_persistent ();

    callback (db, obj, callback_event::post_update);
    pointer_cache_traits::update (db, obj);
  }

  void access::object_traits_impl< ::DBReport, id_sqlite >::
  erase (database& db, const id_type& id)
  {
    using namespace sqlite;

    ODB_POTENTIALLY_UNUSED (db);

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    id_image_type& i (sts.id_image ());
    init (i, id);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    if (sts.erase_statement ().execute () != 1)
      throw object_not_persistent ();

    pointer_cache_traits::erase (db, id);
  }

  access::object_traits_impl< ::DBReport, id_sqlite >::pointer_type
  access::object_traits_impl< ::DBReport, id_sqlite >::
  find (database& db, const id_type& id)
  {
    using namespace sqlite;

    {
      pointer_type p (pointer_cache_traits::find (db, id));

      if (!pointer_traits::null_ptr (p))
        return p;
    }

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    if (l.locked ())
    {
      if (!find_ (sts, &id))
        return pointer_type ();
    }

    pointer_type p (
      access::object_factory<object_type, pointer_type>::create ());
    pointer_traits::guard pg (p);

    pointer_cache_traits::insert_guard ig (
      pointer_cache_traits::insert (db, id, p));

    object_type& obj (pointer_traits::get_ref (p));

    if (l.locked ())
    {
      select_statement& st (sts.find_statement ());
      ODB_POTENTIALLY_UNUSED (st);

      callback (db, obj, callback_event::pre_load);
      init (obj, sts.image (), &db);
      load_ (sts, obj, false);
      sts.load_delayed (0);
      l.unlock ();
      callback (db, obj, callback_event::post_load);
      pointer_cache_traits::load (ig.position ());
    }
    else
      sts.delay_load (id, obj, ig.position ());

    ig.release ();
    pg.release ();
    return p;
  }

  bool access::object_traits_impl< ::DBReport, id_sqlite >::
  find (database& db, const id_type& id, object_type& obj)
  {
    using namespace sqlite;

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    if (!find_ (sts, &id))
      return false;

    select_statement& st (sts.find_statement ());
    ODB_POTENTIALLY_UNUSED (st);

    reference_cache_traits::position_type pos (
      reference_cache_traits::insert (db, id, obj));
    reference_cache_traits::insert_guard ig (pos);

    callback (db, obj, callback_event::pre_load);
    init (obj, sts.image (), &db);
    load_ (sts, obj, false);
    sts.load_delayed (0);
    l.unlock ();
    callback (db, obj, callback_event::post_load);
    reference_cache_traits::load (pos);
    ig.release ();
    return true;
  }

  bool access::object_traits_impl< ::DBReport, id_sqlite >::
  reload (database& db, object_type& obj)
  {
    using namespace sqlite;

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());
    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    statements_type::auto_lock l (sts);

    const id_type& id  (
      obj.millis);

    if (!find_ (sts, &id))
      return false;

    select_statement& st (sts.find_statement ());
    ODB_POTENTIALLY_UNUSED (st);

    callback (db, obj, callback_event::pre_load);
    init (obj, sts.image (), &db);
    load_ (sts, obj, true);
    sts.load_delayed (0);
    l.unlock ();
    callback (db, obj, callback_event::post_load);
    return true;
  }

  bool access::object_traits_impl< ::DBReport, id_sqlite >::
  find_ (statements_type& sts,
         const id_type* id)
  {
    using namespace sqlite;

    id_image_type& i (sts.id_image ());
    init (i, *id);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    image_type& im (sts.image ());
    binding& imb (sts.select_image_binding ());

    if (im.version != sts.select_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_select);
      sts.select_image_version (im.version);
      imb.version++;
    }

    select_statement& st (sts.find_statement ());

    st.execute ();
    auto_result ar (st);
    select_statement::result r (st.fetch ());

    return r != select_statement::no_data;
  }

  result< access::object_traits_impl< ::DBReport, id_sqlite >::object_type >
  access::object_traits_impl< ::DBReport, id_sqlite >::
  query (database&, const query_base_type& q)
  {
    using namespace sqlite;
    using odb::details::shared;
    using odb::details::shared_ptr;

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());

    statements_type& sts (
      conn.statement_cache ().find_object<object_type> ());

    image_type& im (sts.image ());
    binding& imb (sts.select_image_binding ());

    if (im.version != sts.select_image_version () ||
        imb.version == 0)
    {
      bind (imb.bind, im, statement_select);
      sts.select_image_version (im.version);
      imb.version++;
    }

    std::string text (query_statement);
    if (!q.empty ())
    {
      text += " ";
      text += q.clause ();
    }

    q.init_parameters ();
    shared_ptr<select_statement> st (
      new (shared) select_statement (
        conn,
        text,
        false,
        true,
        q.parameters_binding (),
        imb));

    st->execute ();

    shared_ptr< odb::object_result_impl<object_type> > r (
      new (shared) sqlite::object_result_impl<object_type> (
        q, st, sts, 0));

    return result<object_type> (r);
  }

  unsigned long long access::object_traits_impl< ::DBReport, id_sqlite >::
  erase_query (database&, const query_base_type& q)
  {
    using namespace sqlite;

    sqlite::connection& conn (
      sqlite::transaction::current ().connection ());

    std::string text (erase_query_statement);
    if (!q.empty ())
    {
      text += ' ';
      text += q.clause ();
    }

    q.init_parameters ();
    delete_statement st (
      conn,
      text,
      q.parameters_binding ());

    return st.execute ();
  }
}

namespace odb
{
  static bool
  create_schema (database& db, unsigned short pass, bool drop)
  {
    ODB_POTENTIALLY_UNUSED (db);
    ODB_POTENTIALLY_UNUSED (pass);
    ODB_POTENTIALLY_UNUSED (drop);

    if (drop)
    {
      switch (pass)
      {
        case 1:
        {
          return true;
        }
        case 2:
        {
          db.execute ("DROP TABLE IF EXISTS \"DBReport\"");
          return false;
        }
      }
    }
    else
    {
      switch (pass)
      {
        case 1:
        {
          db.execute ("CREATE TABLE \"DBReport\" (\n"
                      "  \"millis\" INTEGER NOT NULL PRIMARY KEY,\n"
                      "  \"user_id\" INTEGER NOT NULL,\n"
                      "  \"power\" INTEGER NOT NULL,\n"
                      "  \"lat\" REAL NULL,\n"
                      "  \"lng\" REAL NULL)");
          return false;
        }
      }
    }

    return false;
  }

  static const schema_catalog_create_entry
  create_schema_entry_ (
    id_sqlite,
    "",
    &create_schema);
}

#include <odb/post.hxx>
